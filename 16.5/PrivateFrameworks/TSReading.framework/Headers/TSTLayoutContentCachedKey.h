// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUTCONTENTCACHEDKEY_H
#define TSTLAYOUTCONTENTCACHEDKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSWPParagraphStyle.h"

@interface TSTLayoutContentCachedKey : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL cellWraps; // ivar: mCellWraps
@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) UIEdgeInsets paddingInsets; // ivar: mPaddingInsets
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: mParagraphStyle
@property (readonly, nonatomic) NSString *string; // ivar: mString
@property (readonly, nonatomic) int valueType; // ivar: mValueType
@property (readonly, nonatomic) unsigned int verticalAlignment; // ivar: mVerticalAlignment
@property (readonly, nonatomic) CGFloat width; // ivar: mWidth
@property (readonly, nonatomic) int writingDirection; // ivar: mWritingDirection


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayoutContentCachedKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 paragraphStyle:(id)arg3 cellWraps:(BOOL)arg4 valueType:(int)arg5 paddingInsets:(struct UIEdgeInsets )arg6 verticalAlignment:(unsigned int)arg7 writingDirection:(int)arg8 ;
-(void)dealloc;


@end


#endif