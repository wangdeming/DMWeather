//
//  City.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Coord.h"

@interface City : NSObject

@property (nonatomic, strong) Coord        *coord;      //经纬度
@property (nonatomic, strong) NSNumber     *cityId;     //城市ID
@property (nonatomic, strong) NSString     *country;    //国家
@property (nonatomic, strong) NSString     *name;       //城市名称
@property (nonatomic, strong) NSNumber     *population; //城市人口

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
