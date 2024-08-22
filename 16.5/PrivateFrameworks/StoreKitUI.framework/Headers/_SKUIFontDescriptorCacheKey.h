// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SKUIFONTDESCRIPTORCACHEKEY_H
#define _SKUIFONTDESCRIPTORCACHEKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SKUIFontDescriptorCacheKey : NSObject

@property (readonly, nonatomic) NSString *sizeCategory; // ivar: _sizeCategory
@property (readonly, nonatomic) *__CFString textStyle; // ivar: _textStyle


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTextStyle:(struct __CFString *)arg0 sizeCategory:(id)arg1 ;


@end


#endif