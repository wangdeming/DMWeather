//
//  MainInfo.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MainInfo : NSObject

@property (nonatomic, strong) NSNumber       *humidity;   // 湿度, %
@property (nonatomic, strong) NSNumber       *temp_min;   // 当前最低温度
@property (nonatomic, strong) NSNumber       *temp_max;   // 当前最高温度
@property (nonatomic, strong) NSNumber       *temp;       // 温度, 华氏摄氏度 (减去 273.15 就是摄氏度)
@property (nonatomic, strong) NSNumber       *pressure;   // 大气压强, hpa
@property (nonatomic, strong) NSNumber       *sea_level;  // 海平面大气压强, hpa
@property (nonatomic, strong) NSNumber       *grnd_level; // 地面大气压强, hPa

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
