// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCRURLLIST_H
#define WCRURLLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WCRURLList : NSObject

@property (retain) NSMutableArray *urlStringList; // ivar: _urlStringList


+(id)_formattedStringFromURLString:(id)arg0 fromBrowser:(BOOL)arg1 ;
-(BOOL)containsURLString:(id)arg0 ;
-(id)init;
-(void)addURLString:(id)arg0 ;


@end


#endif