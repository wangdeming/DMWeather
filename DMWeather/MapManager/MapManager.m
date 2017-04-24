//
//  MapManager.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "MapManager.h"

@interface MapManager ()<CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;

@end

@implementation MapManager

- (void)start {
    
    _locationManager          = [[CLLocationManager alloc] init];
    _locationManager.delegate = self;
    
    // Check for iOS 8. Without this guard the code will crash with "unknown selector" on iOS 7.
    if ([_locationManager respondsToSelector:@selector(requestWhenInUseAuthorization)]) {
        
        [_locationManager requestWhenInUseAuthorization];
    }
    
    [_locationManager startUpdatingLocation];
}

// Location Manager Delegate Methods
- (void)locationManager:(CLLocationManager *)manager didUpdateLocations:(NSArray *)locations {
    
    [manager stopUpdatingLocation];
    
    if (_delegate && [_delegate respondsToSelector:@selector(mapManager:didUpdateAndGetLastCLLocation:)]) {
        
        CLLocation *location = [locations lastObject];
        [_delegate mapManager:self didUpdateAndGetLastCLLocation:location];
    }
}

- (void)locationManager:(CLLocationManager *)manager didFailWithError:(NSError *)error {
    
    NSLog(@"定位失败");
    
    if ([CLLocationManager locationServicesEnabled] == NO) {
        
        NSLog(@"定位功能关闭");
        if (_delegate && [_delegate respondsToSelector:@selector(mapManagerServerClosed:)]) {
            
            [_delegate mapManagerServerClosed:self];
        }
        
    } else {
        
        NSLog(@"定位功能开启");
        if (_delegate && [_delegate respondsToSelector:@selector(mapManager:didFailed:)]) {
            
            NSLog(@"%@", error);
            [_delegate mapManager:self didFailed:error];
        }
    }
}

@synthesize authorizationStatus = _authorizationStatus;

- (CLAuthorizationStatus)authorizationStatus {
    
    return [CLLocationManager authorizationStatus];
}

@end
