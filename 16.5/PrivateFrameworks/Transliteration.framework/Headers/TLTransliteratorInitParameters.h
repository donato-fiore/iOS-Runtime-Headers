// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTRANSLITERATORINITPARAMETERS_H
#define TLTRANSLITERATORINITPARAMETERS_H

@class NSLocale, NSURL;
@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface TLTransliteratorInitParameters : NSObject <NSMutableCopying, NSCopying>



@property (readonly, copy) NSLocale *locale; // ivar: _locale
@property (copy) NSURL *modelURL; // ivar: _modelURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif