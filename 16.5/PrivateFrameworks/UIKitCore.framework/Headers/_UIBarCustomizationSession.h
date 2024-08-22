// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARCUSTOMIZATIONSESSION_H
#define _UIBARCUSTOMIZATIONSESSION_H

@class NSMutableArray, NSArray;
@protocol _UIBarCustomizerAnimating;

#import <Foundation/Foundation.h>


@interface _UIBarCustomizationSession : NSObject

@property (retain, nonatomic, getter=_mutableAdditionalItems) NSMutableArray *_mutableAdditionalItems; // ivar: __mutableAdditionalItems
@property (retain, nonatomic, getter=_mutableVisibleItems) NSMutableArray *_mutableVisibleItems; // ivar: __mutableVisibleItems
@property (readonly, nonatomic) NSArray *additionalItems;
@property (readonly, nonatomic) NSObject<_UIBarCustomizerAnimating> *beginAnimationCoordinator; // ivar: _beginAnimationCoordinator
@property (readonly, nonatomic) NSObject<_UIBarCustomizerAnimating> *endAnimationCoordinator; // ivar: _endAnimationCoordinator
@property (copy, nonatomic) NSArray *sourceItems; // ivar: _sourceItems
@property (readonly, nonatomic) NSArray *visibleItems;


+(id)sessionWithVisibleItems:(id)arg0 additionalItems:(id)arg1 ;


@end


#endif