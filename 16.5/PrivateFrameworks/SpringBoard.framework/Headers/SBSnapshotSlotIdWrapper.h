// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSNAPSHOTSLOTIDWRAPPER_H
#define SBSNAPSHOTSLOTIDWRAPPER_H

@class CAContext;

#import <Foundation/Foundation.h>


@interface SBSnapshotSlotIdWrapper : NSObject

@property (readonly, nonatomic) CAContext *context; // ivar: _context
@property (readonly, nonatomic) unsigned int slotId; // ivar: _slotId


-(id)init;
-(id)initWithContext:(id)arg0 slotId:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif