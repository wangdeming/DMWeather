//
//  Coord.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Coord : NSObject

@property (nonatomic, strong) NSNumber *lon;//经度
@property (nonatomic, strong) NSNumber *lat;//纬度

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
