//
//  SunriseAndSunset.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/8.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SunriseAndSunset : NSObject

@property (nonatomic)                   NSTimeInterval  utcSec;      // 获取到的UTC时间
@property (nonatomic, strong, readonly) NSString       *timeString;  // 时间字符串

/**
 *  开始处理时间信息
 */
- (void)accessUtcSec;

@end
