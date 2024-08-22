// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCLIENTQUEUESESSION_H
#define SUCLIENTQUEUESESSION_H

@class NSArray, SSDownloadManagerOptions;

#import <Foundation/Foundation.h>


@interface SUClientQueueSession : NSObject

@property (nonatomic) NSInteger count; // ivar: _count
@property (copy, nonatomic) NSArray *downloadKinds; // ivar: _downloadKinds
@property (copy, nonatomic) SSDownloadManagerOptions *managerOptions; // ivar: _managerOptions
@property (retain, nonatomic) id *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;


@end


#endif