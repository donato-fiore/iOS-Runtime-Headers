// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLACCESSORYCONFIGURATION_H
#define UICELLACCESSORYCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UICellAccessoryConfiguration : NSObject {
    BOOL _leadingAlwaysNeedsLayout;
    BOOL _trailingAlwaysNeedsLayout;
}


@property (copy, nonatomic) NSArray *leadingAccessories; // ivar: _leadingAccessories
@property (copy, nonatomic) NSArray *trailingAccessories; // ivar: _trailingAccessories


-(BOOL)alwaysNeedsLayout;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif