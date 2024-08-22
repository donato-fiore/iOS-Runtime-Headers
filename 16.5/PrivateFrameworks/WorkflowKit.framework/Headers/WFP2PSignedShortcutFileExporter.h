// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFP2PSIGNEDSHORTCUTFILEEXPORTER_H
#define WFP2PSIGNEDSHORTCUTFILEEXPORTER_H

@class WFFileRepresentation;


#import "WFShortcutExporter.h"

@interface WFP2PSignedShortcutFileExporter : WFShortcutExporter

@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile; // ivar: _signedShortcutFile


-(void)exportWorkflowWithCompletion:(id)arg0 ;


@end


#endif