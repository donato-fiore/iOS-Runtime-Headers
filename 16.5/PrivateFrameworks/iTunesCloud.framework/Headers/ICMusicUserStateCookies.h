// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICUSERSTATECOOKIES_H
#define ICMUSICUSERSTATECOOKIES_H

@class NSString;
@protocol ICMutableMusicUserStateCookies, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ICMusicUserStateCookies : NSObject <ICMutableMusicUserStateCookies, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itfe; // ivar: _itfe
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *xpab; // ivar: _xpab


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif