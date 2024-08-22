// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPPORTEXPORTED_H
#define TSXGPTPPORTEXPORTED_H

@class NSString;
@protocol TSXgPTPPortClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXgPTPPort.h"

@interface TSXgPTPPortExported : NSObject <TSXgPTPPortClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXgPTPPort *object; // ivar: _object
@property (readonly) Class superclass;


-(void)updatedPortProperties:(id)arg0 ;


@end


#endif