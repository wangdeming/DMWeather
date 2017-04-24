//
//  ForecastCell.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ForecastCell : UITableViewCell

/**
 *  处理常规数据
 *
 *  @param data 处理的数据
 */
- (void)acccessData:(id)data indexPath:(NSIndexPath *)indexPath;

/**
 *  显示
 */
- (void)show;

/**
 *  隐藏
 */
- (void)hide;

@end
