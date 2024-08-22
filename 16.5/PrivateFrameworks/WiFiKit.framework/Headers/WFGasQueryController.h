// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGASQUERYCONTROLLER_H
#define WFGASQUERYCONTROLLER_H

@class CWFInterface, NSMapTable, NSSet, NSMutableSet;
@protocol WFGasQueryControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFInterface.h"

@interface WFGasQueryController : NSObject

@property (retain, nonatomic) CWFInterface *cInterface; // ivar: _cInterface
@property (weak, nonatomic) NSObject<WFGasQueryControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMapTable *gasResponseCache; // ivar: _gasResponseCache
@property (retain, nonatomic) WFInterface *interface; // ivar: _interface
@property (readonly, nonatomic) NSSet *profiles; // ivar: _profiles
@property (retain, nonatomic) NSMutableSet *resolvedNetworks; // ivar: _resolvedNetworks


-(id)_ANQPDictionaryFromScanResult:(id)arg0 ;
-(id)_defaultANQPParameterForNetworks:(id)arg0 ;
-(id)init;
-(id)initWithInterface:(id)arg0 ;
-(id)profileForNetwork:(id)arg0 ;
-(void)_processANQPResults:(id)arg0 scanRecords:(id)arg1 error:(id)arg2 ;
-(void)removeAllProfiles;
-(void)removeProfileForNetwork:(id)arg0 ;
// -(void)resolveProfileForNetwork:(id)arg0 handler:(id)arg1 force:(unk)arg2  ;
-(void)resolveProfilesForNetworks:(id)arg0 ;


@end


#endif