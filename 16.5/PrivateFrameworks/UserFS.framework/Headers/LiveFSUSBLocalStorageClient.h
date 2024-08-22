// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSUSBLOCALSTORAGECLIENT_H
#define LIVEFSUSBLOCALSTORAGECLIENT_H

@class LiveFSClient;



@interface LiveFSUSBLocalStorageClient : LiveFSClient



+(id)newManager;
-(id)addDisk:(id)arg0 ;
-(id)getConnectionForVolume:(id)arg0 withError:(*id)arg1 ;
-(id)getVolumeName:(id)arg0 withError:(*id)arg1 ;
-(id)loadVolumes:(id)arg0 ofType:(id)arg1 withError:(*id)arg2 ;
-(id)removeAllVirtualDisks;
-(void)loadVolume:(id)arg0 ofType:(id)arg1 withReply:(id)arg2 ;


@end


#endif