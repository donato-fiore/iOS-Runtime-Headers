// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSAPPLETVSERVICEPROVIDER_H
#define TVRMSAPPLETVSERVICEPROVIDER_H



#import "TVRMSHomeSharingServiceProvider.h"

@interface TVRMSAppleTVServiceProvider : TVRMSHomeSharingServiceProvider



-(NSInteger)serviceLegacyFlagsFromTXTDictionary:(id)arg0 ;
-(NSInteger)serviceTypeFromTXTDictionary:(id)arg0 ;
-(id)searchType;


@end


#endif