// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTFILTEREDTABLEDYNAMICCONTENTDELEGATE_H
#define TSTFILTEREDTABLEDYNAMICCONTENTDELEGATE_H

@class NSString;
@protocol TSTLayoutDynamicContentProtocol;

#import <Foundation/Foundation.h>

#import "TSTTableModel.h"

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>

 {
    TSTTableModel *mTableModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cell:(*id)arg0 forCellID:(struct ? )arg1 ;
-(BOOL)dynamicContentMustDrawOnMainThread;
-(id)initWithTableModel:(id)arg0 ;
-(void)dealloc;


@end


#endif