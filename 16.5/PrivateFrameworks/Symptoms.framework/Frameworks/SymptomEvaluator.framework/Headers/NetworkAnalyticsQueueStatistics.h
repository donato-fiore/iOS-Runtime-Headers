// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETWORKANALYTICSQUEUESTATISTICS_H
#define NETWORKANALYTICSQUEUESTATISTICS_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NetworkAnalyticsQueueStatistics : NSObject {
    CGFloat _lastUpdateTime;
    int _ioctlSocket;
}


@property (readonly) NSString *interfaceName; // ivar: _interfaceName
@property (retain, nonatomic) NSMutableArray *slots; // ivar: _slots


+(id)schedulerToString:(unsigned int)arg0 ;
+(id)slotToString:(unsigned char)arg0 ;
-(id)_entryForSlot:(unsigned char)arg0 ;
-(id)description;
-(id)initWithInterfaceName:(id)arg0 ;
-(void)_processNewStats:(struct if_ifclassq_stats *)arg0 forSlot:(unsigned char)arg1 ;
-(void)_updateForSlot:(unsigned char)arg0 ;
-(void)cleanupIoctlSocket;
-(void)createIoctlSocket;
-(void)dealloc;
-(void)update;


@end


#endif