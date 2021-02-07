/*
 * TriggerSelector.cpp
 *
 *  Created on: 14 Mar 2017
 *      Author: jeremy
 */

#include "TriggerSelector.h"

namespace Widgets
{


	TriggerSelector::TriggerSelector(int sensorId)
	: sensorId(sensorId), label("Trigger " + std::to_string(sensorId)),
	  preferencesButton(Gtk::StockID("gtk-preferences")),
	  deleteButton(Gtk::StockID("gtk-delete"))
	{

		this->set_halign(Gtk::Align::ALIGN_START);
		this->set_column_homogeneous(true);

		// Set label
		label.set_halign(Gtk::Align::ALIGN_END);
		label.set_margin_right(8);
		label.show();
		this->attach(label, 0, 0, 1, 1);

		// Set preferences button
		this->attach_next_to(preferencesButton, label, Gtk::PositionType::POS_RIGHT, 1, 1);
		preferencesButton.set_margin_right(4);
		preferencesButton.show();

		// Set delete button
		this->attach_next_to(deleteButton, preferencesButton, Gtk::PositionType::POS_RIGHT, 1, 1);
		deleteButton.show();


		this->show();

		return;
	}


} /* namespace Widgets */
