// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSXGPTPMANAGEREXPORTED_H
#define TSXGPTPMANAGEREXPORTED_H

@class NSString;
@protocol TSXgPTPManagerClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXgPTPManager.h"

@interface TSXgPTPManagerExported : NSObject <TSXgPTPManagerClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXgPTPManager *object; // ivar: _object
@property (readonly) Class superclass;




@end


#endif