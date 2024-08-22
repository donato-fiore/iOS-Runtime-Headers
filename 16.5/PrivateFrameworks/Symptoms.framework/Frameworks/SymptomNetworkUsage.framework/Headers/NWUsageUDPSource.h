// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWUSAGEUDPSOURCE_H
#define NWUSAGEUDPSOURCE_H

@class NSDictionary;


#import "NWUsageSource.h"

@interface NWUsageUDPSource : NWUsageSource {
    nstat_msg_src_update_udp _nstatUDPUpdate;
    NSDictionary *_lookupResults;
}




-(BOOL)updateWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(id)createSnapshot:(int)arg0 firstOccurrence:(BOOL)arg1 ;
-(id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg0 ;
-(void)significantMetadataChange:(struct nstat_udp_descriptor *)arg0 monitor:(id)arg1 ;


@end


#endif