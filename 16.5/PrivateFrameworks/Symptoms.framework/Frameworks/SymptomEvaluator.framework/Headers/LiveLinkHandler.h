// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVELINKHANDLER_H
#define LIVELINKHANDLER_H

@class NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface LiveLinkHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)excludeLocalFlowsTrackingOnInterface:(id)arg0 ;
-(BOOL)includeLocalFlowsTrackingOnInterface:(id)arg0 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(BOOL)startTrackingLiveLinkOnInterface:(id)arg0 ;
-(BOOL)stopTrackingLiveLinkOnInterface:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;


@end


#endif