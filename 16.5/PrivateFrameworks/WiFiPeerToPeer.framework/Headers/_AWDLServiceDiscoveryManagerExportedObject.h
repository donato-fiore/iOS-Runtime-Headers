// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AWDLSERVICEDISCOVERYMANAGEREXPORTEDOBJECT_H
#define _AWDLSERVICEDISCOVERYMANAGEREXPORTEDOBJECT_H

@class NSString;
@protocol AWDLServiceDiscoveryManagerXPCDelegate;

#import <Foundation/Foundation.h>

#import "AWDLServiceDiscoveryManager.h"

@interface _AWDLServiceDiscoveryManagerExportedObject : NSObject <AWDLServiceDiscoveryManagerXPCDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AWDLServiceDiscoveryManager *manager; // ivar: _manager
@property (readonly) Class superclass;


-(void)invalidatedActiveTrafficRegistration:(id)arg0 ;


@end


#endif