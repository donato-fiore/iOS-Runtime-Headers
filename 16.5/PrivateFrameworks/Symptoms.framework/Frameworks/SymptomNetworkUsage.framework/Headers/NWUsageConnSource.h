// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWUSAGECONNSOURCE_H
#define NWUSAGECONNSOURCE_H

@class NSDictionary, NSUUID;


#import "NWUsageSource.h"
#import "NWConnProperties.h"

@interface NWUsageConnSource : NWUsageSource {
    nstat_msg_src_update_conn _nstatConnUpdate;
    NSDictionary *_lookupResults;
    NWConnProperties *_currentProperties;
    NWConnProperties *_ancestralProperties;
}


@property int epid; // ivar: _epid
@property (retain, nonatomic) NSUUID *euuid; // ivar: _euuid


-(BOOL)processExtendedUpdate:(struct nstat_msg_src_extended_item_hdr *)arg0 length:(NSInteger)arg1 ;
-(BOOL)updateWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(id)createSnapshot:(int)arg0 firstOccurrence:(BOOL)arg1 ;
-(id)descriptorDescription:(struct nstat_connection_descriptor *)arg0 ;
-(id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg0 ;
-(void)populateConnProperties:(id)arg0 fromDomainInfo:(struct nstat_domain_info *)arg1 ;
-(void)significantMetadataChange:(struct nstat_connection_descriptor *)arg0 monitor:(id)arg1 ;


@end


#endif