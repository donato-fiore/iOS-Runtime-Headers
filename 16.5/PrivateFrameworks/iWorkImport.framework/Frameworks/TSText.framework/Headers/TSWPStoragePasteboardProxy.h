// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSTORAGEPASTEBOARDPROXY_H
#define TSWPSTORAGEPASTEBOARDPROXY_H

@class TSPObject;
@protocol TSWPStyleProvider;


#import "TSWPStorage.h"

@interface TSWPStoragePasteboardProxy : TSPObject {
    TSWPStorage *_storage;
    id<TSWPStyleProvider> *_styleProvider;
}


@property (readonly, nonatomic) _NSRange storageRange; // ivar: _range


-(id)initWithContext:(id)arg0 storage:(id)arg1 range:(struct _NSRange )arg2 styleProvider:(id)arg3 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif