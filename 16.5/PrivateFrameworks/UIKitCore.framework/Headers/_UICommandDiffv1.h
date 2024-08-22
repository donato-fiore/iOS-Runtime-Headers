// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMMANDDIFFV1_H
#define _UICOMMANDDIFFV1_H

@class NSOrderedSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UICommandDiffv1 : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSOrderedSet *changes; // ivar: _changes


+(BOOL)supportsSecureCoding;
+(id)diffWithChanges:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChanges:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif