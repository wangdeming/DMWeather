//
//  SearchView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SearchView;

@protocol SearchViewDelegate <NSObject>

- (void)currentLocationWithView:(SearchView *)view;

@end

@interface SearchView : UIView

/**
 *  代理方法
 */
@property (nonatomic, weak) id<SearchViewDelegate>  delegate;

/**
 *  创建出view
 */
- (void)buildView;

@end
