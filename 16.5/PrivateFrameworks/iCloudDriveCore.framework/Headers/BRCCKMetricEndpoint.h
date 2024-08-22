// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCCKMETRICENDPOINT_H
#define BRCCKMETRICENDPOINT_H



#import "BRCMetricEndpoint.h"
#import "BRCAccountSessionFPFS.h"

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSessionFPFS *_session;
}




-(id)initWithSession:(id)arg0 ;
-(void)submitEventMetric:(id)arg0 ;


@end


#endif