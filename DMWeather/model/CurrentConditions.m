//
//  CurrentConditions.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "CurrentConditions.h"

@implementation CurrentConditions

- (void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
    
}

- (void)setValue:(id)value forKey:(NSString *)key {
    
    if ([value isKindOfClass:[NSNull class]]) {
        
        return;
    }
    
    if ([key isEqualToString:@"city"]) {
        
        value = [[City alloc] initWithDictionary:value];
    }
    
    if ([key isEqualToString:@"list"] && [value isKindOfClass:[NSArray class]]) {
        
        NSArray *tmp                    = value;
        NSMutableArray *weatherInfoList = [NSMutableArray array];
        
        for (NSDictionary *info in tmp) {
            
            WeatherInfo *weatherInfo = [[WeatherInfo alloc] initWithDictionary:info];
            [weatherInfoList addObject:weatherInfo];
        }
        
        value = weatherInfoList;
    }
    
    [super setValue:value forKey:key];
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary {
    
    if ([dictionary isKindOfClass:[NSDictionary class]]) {
        
        if (self = [super init]) {
            
            [self setValuesForKeysWithDictionary:dictionary];
        }
        
        return self;
        
    } else {
        
        return nil;
    }
}

@end
