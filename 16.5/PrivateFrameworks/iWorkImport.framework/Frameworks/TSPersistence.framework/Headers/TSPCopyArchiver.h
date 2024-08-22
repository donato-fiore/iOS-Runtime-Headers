// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPCOPYARCHIVER_H
#define TSPCOPYARCHIVER_H

@protocol TSPProxyObjectMappingProvider, TSPProxyObjectMapping;


#import "TSPArchiver.h"

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider>



@property (weak, nonatomic) NSObject<TSPProxyObjectMapping> *proxyObjectMapping; // ivar: _proxyObjectMapping
@property (readonly, nonatomic) NSInteger targetType;


-(void)setStrongLazyReference:(id)arg0 message:(*void)arg1 ;
-(void)setStrongReference:(id)arg0 message:(*void)arg1 ;


@end


#endif