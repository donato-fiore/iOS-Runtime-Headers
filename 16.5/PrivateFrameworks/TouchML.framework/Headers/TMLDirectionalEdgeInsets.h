// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLDIRECTIONALEDGEINSETS_H
#define TMLDIRECTIONALEDGEINSETS_H

@protocol TMLDirectionalEdgeInsetsJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLDirectionalEdgeInsets : NSObject <TMLDirectionalEdgeInsetsJSExports, NSCopying>



@property (readonly, nonatomic) CGFloat bottom;
@property (readonly, nonatomic) NSDirectionalEdgeInsets directionalEdgeInsets; // ivar: _directionalEdgeInsets
@property (readonly, nonatomic) CGFloat leading;
@property (readonly, nonatomic) CGFloat top;
@property (readonly, nonatomic) CGFloat trailing;


+(void)initializeJSContext:(id)arg0 ;
-(id)NSDirectionalEdgeInsetsValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets )arg0 ;


@end


#endif