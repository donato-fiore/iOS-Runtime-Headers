// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPFONTCACHEVALUE_H
#define TSWPFONTCACHEVALUE_H


#import <Foundation/Foundation.h>


@interface TSWPFontCacheValue : NSObject

@property (readonly, nonatomic) *__CTFont ctFont; // ivar: _ctFont


+(id)cacheValueWithCTFont:(struct __CTFont *)arg0 ;
-(id)initWithCTFont:(struct __CTFont *)arg0 ;
-(void)dealloc;


@end


#endif