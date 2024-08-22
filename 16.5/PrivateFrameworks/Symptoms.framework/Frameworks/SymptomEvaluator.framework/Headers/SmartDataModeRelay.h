// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMARTDATAMODERELAY_H
#define SMARTDATAMODERELAY_H


#import <Foundation/Foundation.h>

#import "CellularStateRelay.h"
#import "SystemSettingsRelay.h"

@interface SmartDataModeRelay : NSObject {
    CellularStateRelay *_cellStateRelay;
    SystemSettingsRelay *_systemSettingsRelay;
}


@property (nonatomic) unsigned char cellDataStatus; // ivar: _cellDataStatus


+(id)cellDataStatusToString:(unsigned char)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)_updateCellDataStatus;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif