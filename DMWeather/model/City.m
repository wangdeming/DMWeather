//
//  City.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "City.h"

@implementation City

-(void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    
}

-(void)setValue:(id)value forKey:(NSString *)key
{
    if ([value isKindOfClass:[NSNull class]]) {
        return;
    }
    
    if ([key isEqualToString:@"coord"]) {
        
        value = [[Coord alloc]initWithDictionary:value];
    }
    
    [super setValue:value forKey:key];
}

-(instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    if ([dictionary isKindOfClass:[NSDictionary class]]) {
        self = [super init];
        if (self) {
            [self setValuesForKeysWithDictionary:dictionary];
        }
        return self;
    }else{
        return nil;
    }
}

@end
