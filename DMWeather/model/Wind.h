//
//  Wind.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Wind : NSObject

@property (nonatomic, strong) NSNumber       *speed; // Wind speed, mps
@property (nonatomic, strong) NSNumber       *deg;   // Wind direction, degrees (meteorological)


- (void)setValue:(id)value forUndefinedKey:(NSString *)key;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
