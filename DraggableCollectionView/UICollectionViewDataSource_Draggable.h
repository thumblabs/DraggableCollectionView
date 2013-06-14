//
//  Copyright (c) 2013 Luke Scott
//  https://github.com/lukescott/DraggableCollectionView
//  Distributed under MIT license
//

#import <Foundation/Foundation.h>
#import "PSTCollectionView.h"

@class LSCollectionViewHelper;

@protocol UICollectionViewDataSource_Draggable <PSTCollectionViewDataSource>
@required

- (void)collectionView:(PSTCollectionView *)collectionView moveItemAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath;
- (BOOL)collectionView:(PSTCollectionView *)collectionView canMoveItemAtIndexPath:(NSIndexPath *)indexPath;
@end
