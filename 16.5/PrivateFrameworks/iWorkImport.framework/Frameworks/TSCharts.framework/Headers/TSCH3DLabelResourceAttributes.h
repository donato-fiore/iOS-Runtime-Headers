// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DLABELRESOURCEATTRIBUTES_H
#define TSCH3DLABELRESOURCEATTRIBUTES_H

@class TSWPParagraphStyle, NSString;
@protocol NSCopying, TSWPStyleProviding;

#import <Foundation/Foundation.h>

#import "TSCH3DLabelBitmapContextInfo.h"

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying>



@property (readonly, nonatomic) TSCH3DLabelBitmapContextInfo *bitmapContextInfo; // ivar: _bitmapContextInfo
@property (readonly, nonatomic) CGFloat labelWidth; // ivar: _labelWidth
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly, nonatomic) CGFloat renderSamples; // ivar: _renderSamples
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: _styleProvidingSource


+(id)labelAttributesWithParagraphStyle:(id)arg0 string:(id)arg1 bitmapContextInfo:(id)arg2 labelWidth:(CGFloat)arg3 renderSamples:(CGFloat)arg4 styleProvidingSource:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithParagraphStyle:(id)arg0 string:(id)arg1 bitmapContextInfo:(id)arg2 labelWidth:(CGFloat)arg3 renderSamples:(CGFloat)arg4 styleProvidingSource:(id)arg5 ;


@end


#endif