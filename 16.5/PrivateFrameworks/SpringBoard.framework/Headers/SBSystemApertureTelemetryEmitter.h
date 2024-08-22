// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURETELEMETRYEMITTER_H
#define SBSYSTEMAPERTURETELEMETRYEMITTER_H


#import <Foundation/Foundation.h>


@interface SBSystemApertureTelemetryEmitter : NSObject



+(id)stringBySanitizingNil:(id)arg0 ;
+(void)_emitCoreAnalyticsTelemetryIfNecessaryWithLayoutState:(id)arg0 previousLayoutState:(id)arg1 ;
+(void)_emitPowerLogIfNecessaryWithLayoutState:(id)arg0 previousLayoutState:(id)arg1 ;
+(void)logTelemetryForInteractionLongPress:(BOOL)arg0 touchOffsetFromInertCenter:(struct CGPoint )arg1 clientIdentifier:(id)arg2 elementIdentifier:(id)arg3 ;
+(void)logTelemetryForInteractionPanGesture:(NSInteger)arg0 handled:(BOOL)arg1 touchOffsetFromInertCenter:(struct CGPoint )arg2 clientIdentifier:(id)arg3 elementIdentifier:(id)arg4 ;
+(void)logTelemetryForInteractionTap:(BOOL)arg0 touchOffsetFromInertCenter:(struct CGPoint )arg1 clientIdentifier:(id)arg2 elementIdentifier:(id)arg3 ;
+(void)logTelemetryForLayoutState:(id)arg0 previousLayoutState:(id)arg1 ;


@end


#endif