//
//  Clouds.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Clouds : NSObject

@property (nonatomic, strong) NSNumber      *all;       //Cloudiness %

-(void)setValue:(id)value forUndefinedKey:(NSString *)key;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
