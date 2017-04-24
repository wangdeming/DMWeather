//
//  LineAnimationView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LineAnimationView : UIView

@property (nonatomic) CGFloat maxAlpha;
@property (nonatomic) CGFloat fadeToShowDuration;
@property (nonatomic) CGFloat fadeToHideDuration;

@property (nonatomic) CGRect  startFrame;
@property (nonatomic) CGRect  midFrame;
@property (nonatomic) CGRect  endFrame;

- (void)show;
- (void)hide;


@end
