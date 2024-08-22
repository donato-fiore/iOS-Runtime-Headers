// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASGRIDCELLSTYLE_H
#define VIDEOSEXTRASGRIDCELLSTYLE_H

@class NSDictionary, UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VideosExtrasGridCellStyle : NSObject <NSCopying>



@property (nonatomic) NSInteger defaultTextAlignment; // ivar: _defaultTextAlignment
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (copy, nonatomic) NSDictionary *subtitleDefaultFontAttributes; // ivar: _subtitleDefaultFontAttributes
@property (nonatomic) CGFloat subtitleFirstBaselineHeight; // ivar: _subtitleFirstBaselineHeight
@property (copy, nonatomic) UIColor *subtitleTextColor; // ivar: _subtitleTextColor
@property (copy, nonatomic) NSString *subtitleTextStyle; // ivar: _subtitleTextStyle
@property (nonatomic) CGFloat textFirstBaselineToBottom; // ivar: _textFirstBaselineToBottom
@property (nonatomic) CGFloat textLastBaselineToBottom; // ivar: _textLastBaselineToBottom
@property (copy, nonatomic) NSDictionary *titleDefaultFontAttributes; // ivar: _titleDefaultFontAttributes
@property (nonatomic) CGFloat titleFirstBaselineHeight; // ivar: _titleFirstBaselineHeight
@property (copy, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (copy, nonatomic) NSString *titleTextStyle; // ivar: _titleTextStyle


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif