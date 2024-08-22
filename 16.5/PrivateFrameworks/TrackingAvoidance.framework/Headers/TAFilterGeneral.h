// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAFILTERGENERAL_H
#define TAFILTERGENERAL_H


#import <Foundation/Foundation.h>


@interface TAFilterGeneral : NSObject



+(BOOL)locationSegments:(id)arg0 underMaxSpeed:(CGFloat)arg1 ;
+(BOOL)locationSegmentsUnderPedestrianMaxSpeed:(id)arg0 withFilterSettings:(id)arg1 ;
+(BOOL)satisfyBeepOnMoveRequirementForAddress:(id)arg0 store:(id)arg1 settings:(id)arg2 ;
+(BOOL)satisfyNextPLOIHomeWithStore:(id)arg0 ;
+(BOOL)shouldIssuePeopleDensityScan:(NSUInteger)arg0 distTravel:(CGFloat)arg1 durationOfTravel:(CGFloat)arg2 settings:(id)arg3 resultsInBuffer:(id)arg4 ;
+(CGFloat)distOfTravelAlong:(id)arg0 ;
+(id)dateIntervalAfterVisitAdjustment:(id)arg0 intervalOfInterest:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg0 settings:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
+(id)filteredInterVisitMetadata:(id)arg0 inInterval:(id)arg1 withLocRelevanceThreshold:(CGFloat)arg2 ;
+(id)filteredInterVisitMetadataWithVisitAdjustment:(id)arg0 inInterval:(id)arg1 withLocRelevanceThreshold:(CGFloat)arg2 ;
+(id)filteredPeopleDensityResults:(id)arg0 within:(id)arg1 ;
+(id)getDateIntervalOfInterestForFiltering:(id)arg0 settings:(id)arg1 ;
+(void)preprocessLocationAndAdvertisementWithEnumerator:(id)arg0 addressToLocationList:(id)arg1 addressToAdvertisementList:(id)arg2 relevanceThreshold:(CGFloat)arg3 ;


@end


#endif