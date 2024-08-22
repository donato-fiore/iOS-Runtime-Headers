// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHTSWPTEXTDELEGATE_H
#define TSCHTSWPTEXTDELEGATE_H

@class TSULocale, TSWPPadding;
@protocol TSWPTextDelegate, TSWPStyleProviding;

#import <Foundation/Foundation.h>


@interface TSCHTSWPTextDelegate : NSObject <TSWPTextDelegate>



@property (nonatomic) BOOL forceWesternLineBreaking; // ivar: forceWesternLineBreaking
@property (retain, nonatomic) TSULocale *locale; // ivar: locale
@property (nonatomic) CGFloat maxWidthForChildren; // ivar: maxWidthForChildren
@property (retain, nonatomic) TSWPPadding *padding; // ivar: _padding
@property (nonatomic) BOOL shouldHyphenate; // ivar: shouldHyphenate
@property (weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: styleProvidingSource
@property (nonatomic) int verticalAlignment; // ivar: _verticalAlignment




@end


#endif