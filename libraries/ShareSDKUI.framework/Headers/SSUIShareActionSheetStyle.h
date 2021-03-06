//
//  SSUIShareActionSheetStyle.h
//  ShareSDKUI
//
//  Created by 刘靖煌 on 15/7/15.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SSUIShareActionSheetStyle : NSObject

/**
 *  设置分享菜单栏颜色
 *
 *  @param color 背景颜色
 */
+ (void)setActionSheetColor:(UIColor *)color;

/**
 *  设置分享菜单栏的背景颜色
 *
 *  @param color 背景颜色
 */
+ (void)setActionSheetBackgroundColor:(UIColor *)color;

/**
 *  设置标题文本颜色
 */
+ (void)setItemNameColor:(UIColor *)color;

/**
 *  设置标题文本字体
 */
+ (void)setItemNameFont:(UIFont *)font;

/**
 *  设置取消按钮标签文本颜色
 *
 *  @param color 颜色
 */
+ (void)setCancelButtonLabelColor:(UIColor *)color;

/**
 *  设置取消按钮标签字体
 */
+ (void)setCancelButtonBackgroundColor:(UIColor *)color;

/**
 *  设置UIPageControl的Indicator的颜色
 */
+ (void)setPageIndicatorTintColor:(UIColor *)color;

/**
 *  设置UIPageControl当前页的Indicator的颜色
 */
+ (void)setCurrentPageIndicatorTintColor:(UIColor *)color;


@end
