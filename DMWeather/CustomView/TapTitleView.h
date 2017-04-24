//
//  TapTitleView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TapTitleView;

@protocol TapTitleViewDelegate <NSObject>

@optional

- (void)tapTitleView:(TapTitleView *)tapView;

@end

@interface TapTitleView : UIView

@property (nonatomic, weak)   id<TapTitleViewDelegate>   delegate;

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIColor  *normalColor;
@property (nonatomic, strong) UIColor  *tapColor;
@property (nonatomic, strong) UIFont   *font;

@end
