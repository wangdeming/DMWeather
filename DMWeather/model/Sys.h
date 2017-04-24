//
//  Sys.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sys : NSObject

@property (nonatomic, strong) NSNumber       *message;  // System parameter, do not use it
@property (nonatomic, strong) NSString       *country;  // Country (GB, JP etc.)
@property (nonatomic, strong) NSNumber       *sunset;   // Sunrise time, unix, UTC 日出时间
@property (nonatomic, strong) NSNumber       *sunrise;  // Sunset time, unix, UTC  日落时间

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
