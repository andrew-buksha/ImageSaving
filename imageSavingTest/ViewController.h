//
//  ViewController.h
//  imageSavingTest
//
//  Created by Андрей Букша on 26.12.15.
//  Copyright © 2015 Андрей Букша. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
@import Photos;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *image;
@property (nonatomic, strong) PHAssetCollection *assetCollection;
- (IBAction)saveBtnPressed:(id)sender;
- (IBAction)listbtn:(id)sender;
@end

