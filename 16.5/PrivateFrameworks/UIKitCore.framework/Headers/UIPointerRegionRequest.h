// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPOINTERREGIONREQUEST_H
#define UIPOINTERREGIONREQUEST_H


#import <Foundation/Foundation.h>


@interface UIPointerRegionRequest : NSObject

@property (nonatomic) NSInteger _requestingDriverType; // ivar: __requestingDriverType
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) NSInteger modifiers; // ivar: _modifiers


-(BOOL)_isPencilInitiated;
-(id)description;


@end


#endif