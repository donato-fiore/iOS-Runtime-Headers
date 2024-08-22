// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEREPPROCESSCHANGESACTIONS_H
#define TSTTABLEREPPROCESSCHANGESACTIONS_H


#import <Foundation/Foundation.h>


@interface TSTTableRepProcessChangesActions : NSObject {
    ? _dirtyCellRanges;
}


@property (nonatomic) TSUCellRect dirtyStrokeRange; // ivar: _dirtyStrokeRange
@property (nonatomic) BOOL expandDirtyRegionForReferences; // ivar: _expandDirtyRegionForReferences
@property (nonatomic) BOOL hideChromeContextMenuButton; // ivar: _hideChromeContextMenuButton
@property (nonatomic) BOOL hideStepperHUD; // ivar: _hideStepperHUD
@property (nonatomic) BOOL invalidateAllChrome; // ivar: _invalidateAllChrome
@property (nonatomic) BOOL invalidateAllChromeCaches; // ivar: _invalidateAllChromeCaches
@property (nonatomic) BOOL invalidateColumnChrome; // ivar: _invalidateColumnChrome
@property (nonatomic) BOOL invalidateKnobs; // ivar: _invalidateKnobs
@property (nonatomic) BOOL invalidateRowChrome; // ivar: _invalidateRowChrome
@property (nonatomic) BOOL invalidateSelection; // ivar: _invalidateSelection
@property (nonatomic) BOOL invalidateTableName; // ivar: _invalidateTableName
@property (nonatomic) BOOL repositionStockPopover; // ivar: _repositionStockPopover
@property (nonatomic) BOOL setNeedsDisplay; // ivar: _setNeedsDisplay
@property (nonatomic) BOOL syncReferenceHighlightState; // ivar: _syncReferenceHighlightState
@property (nonatomic) BOOL updateEditorRemainders; // ivar: _updateEditorRemainders


-(*void)dirtyCellRanges;
-(void)setDirtyCellRange:(struct TSUCellRect )arg0 ;


@end


#endif