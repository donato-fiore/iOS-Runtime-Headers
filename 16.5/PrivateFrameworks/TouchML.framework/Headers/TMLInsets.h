// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLINSETS_H
#define TMLINSETS_H

@protocol TMLInsetsJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying>

 {
    UIEdgeInsets _insets;
}


@property (readonly, nonatomic) CGFloat bottom;
@property (readonly, nonatomic) CGFloat left;
@property (readonly, nonatomic) CGFloat right;
@property (readonly, nonatomic) CGFloat top;


+(void)initializeJSContext:(id)arg0 ;
-(id)UIEdgeInsetsValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithInsets:(struct UIEdgeInsets )arg0 ;
-(struct UIEdgeInsets )UIEdgeInsets;


@end


#endif