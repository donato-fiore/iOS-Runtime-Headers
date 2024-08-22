// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMOVEMENTINFO_H
#define _UIFOCUSMOVEMENTINFO_H

@class NSString;
@protocol NSCopying, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_fallbackMovementOriginatingFrame, setter=_setFallbackMovementOriginatingFrame:) CGRect fallbackMovementOriginatingFrame; // ivar: _fallbackMovementOriginatingFrame
@property (nonatomic, getter=_groupFilter, setter=_setGroupFilter:) NSInteger groupFilter; // ivar: _groupFilter
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setHeading:) NSUInteger heading; // ivar: _heading
@property (nonatomic, getter=_isInitialMovement, setter=_setIsInitialMovement:) BOOL isInitialMovement; // ivar: _isInitialMovement
@property (nonatomic, getter=_isVelocityBased, setter=_setIsVelocityBased:) BOOL isVelocityBased; // ivar: _isVelocityBased
@property (nonatomic, getter=_linearHeading, setter=_setLinearHeading:) NSUInteger linearHeading; // ivar: _linearHeading
@property (nonatomic, getter=_isLooping, setter=_setLooping:) BOOL looping; // ivar: _looping
@property (nonatomic, getter=_shouldLoadScrollableContainer, setter=_setShouldLoadScrollableContainer:) BOOL shouldLoadScrollableContainer; // ivar: _shouldLoadScrollableContainer
@property (readonly) Class superclass;
@property (nonatomic, getter=_velocity, setter=_setVelocity:) CGVector velocity; // ivar: _velocity


+(BOOL)supportsSecureCoding;
+(id)_movementWithHeading:(NSUInteger)arg0 isInitial:(BOOL)arg1 ;
+(id)_movementWithHeading:(NSUInteger)arg0 isInitial:(BOOL)arg1 fallbackMovementOriginatingFrame:(struct CGRect )arg2 ;
-(BOOL)_isLinearMovement;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeading:(NSUInteger)arg0 linearHeading:(NSUInteger)arg1 isInitial:(BOOL)arg2 shouldLoadScrollableContainer:(BOOL)arg3 looping:(BOOL)arg4 groupFilter:(NSInteger)arg5 ;
-(id)initWithHeading:(NSUInteger)arg0 velocity:(struct CGVector )arg1 isInitial:(BOOL)arg2 shouldLoadScrollableContainer:(BOOL)arg3 groupFilter:(NSInteger)arg4 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif