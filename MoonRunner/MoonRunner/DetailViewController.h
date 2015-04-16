//
//  DetailViewController.h
//  MoonRunner
//
//  Created by Wu Wai Choong on 4/16/15.
//  Copyright (c) 2015 Wai Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

